// HomePage.js

import React from 'react';
import { Link } from 'react-router-dom';

import techImage1 from './images/tech_image_1.jpg';
import techImage2 from './images/tech_image_2.jpg';

const HomePage = () => {
  return (
    <div className="bg-gray-100">
      {/* Hero Section */}
      <div className="bg-blue-800 text-white text-center py-16">
        <h1 className="text-4xl font-bold mb-4">Explore the World of Tech with [Your Tech Club Name]</h1>
        <p className="text-lg mb-8">Empowering Innovators, Connecting Minds, and Building the Future.</p>
        <Link to="/about-us" className="bg-white text-blue-800 py-2 px-6 rounded-full text-lg font-semibold transition duration-300 hover:bg-blue-700 hover:text-white">
          Learn More
        </Link>
      </div>

      {/* About Us Section */}
      <div className="container mx-auto my-8 p-8 bg-white rounded shadow-md">
        <h2 className="text-3xl font-bold mb-6">About Us</h2>
        <p className="text-gray-700 mb-6">
          [Your Tech Club Name] is a dynamic community dedicated to exploring and advancing technology. We provide a platform for enthusiasts, learners, and innovators to collaborate, learn, and create together. Whether you're a beginner or an experienced professional, there's a place for you in our tech family.
        </p>
        <Link to="/about-us" className="text-blue-800 font-semibold hover:underline">
          Discover Our Mission
        </Link>
      </div>

      {/* Events Section */}
      <div className="container mx-auto my-8 p-8 bg-white rounded shadow-md">
        <h2 className="text-3xl font-bold mb-6">Upcoming Events</h2>
        {/* Add your event listings or a carousel here */}
        <p className="text-gray-700">Stay tuned for exciting tech events, workshops, and hackathons! Don't miss the chance to enhance your skills and connect with like-minded tech enthusiasts.</p>
        <Link to="/events" className="text-blue-800 font-semibold hover:underline">
          View All Events
        </Link>
      </div>

      {/* Image Gallery Section */}
      <div className="grid grid-cols-1 md:grid-cols-2 gap-8 container mx-auto my-8">
        <img src={techImage1} alt="Tech Club Image" className="rounded-lg shadow-md" />
        <img src={techImage2} alt="Tech Club Event" className="rounded-lg shadow-md" />
      </div>

      {/* Call to Action Section */}
      <div className="container mx-auto my-8 p-8 bg-white rounded shadow-md text-center">
        <h2 className="text-3xl font-bold mb-4">Join [Your Tech Club Name] Today!</h2>
        <p className="text-gray-700 mb-6">
          Ready to dive into the world of tech? Join our community and be part of something extraordinary. Explore new possibilities, learn from experts, and connect with fellow tech enthusiasts.
        </p>
        <Link to="/join-us" className="bg-blue-800 text-white py-2 px-6 rounded-full text-lg font-semibold transition duration-300 hover:bg-blue-700 hover:text-white">
          Join Now
        </Link>
      </div>
    </div>
  );
};

export default HomePage;
