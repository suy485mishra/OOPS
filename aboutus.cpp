// AboutUsPage.js

import React from 'react';

import techImage1 from './images/tech_image_1.jpg';
import techImage2 from './images/tech_image_2.jpg';

const AboutUsPage = () => {
  return (
    <div className="container mx-auto my-8 p-8 bg-white rounded shadow-md">
      <h1 className="text-3xl font-bold mb-6">Welcome to [Your Tech Club Name]</h1>
      <img src={techImage1} alt="Tech Club Image" className="mb-8 rounded-lg shadow-md" />
      <p className="text-gray-700 mb-6">
        At [Your Tech Club Name], we are passionate about fostering a vibrant community
        of tech enthusiasts, learners, and innovators. Established with the vision of
        creating a space where technology meets creativity, our club is more than just
        a platform; it's a hub for collaboration, exploration, and skill development.
      </p>

      <h2 className="text-2xl font-bold mb-4">Our Mission</h2>
      <ul className="list-disc ml-6 mb-6">
        {/* ... mission list items ... */}
      </ul>

      <h2 className="text-2xl font-bold mb-4">What Sets Us Apart</h2>
      <ul className="list-disc ml-6 mb-6">
        {/* ... sets us apart list items ... */}
      </ul>

      <img src={techImage2} alt="Tech Club Event" className="mb-8 rounded-lg shadow-md" />

      <h2 className="text-2xl font-bold mb-4">Join Us on the Tech Journey</h2>
      <p className="text-gray-700 mb-6">
        Whether you're a seasoned professional or a curious beginner, [Your Tech Club Name]
        welcomes you to embark on a journey of discovery, growth, and innovation. Together, let's
        push the boundaries of what's possible in the tech world.
      </p>

      <p className="text-gray-700 mb-6">
        Ready to dive in? Explore our upcoming events, connect with fellow members, and let's
        build the future together!
      </p>

      {/* You can add links or buttons for navigation here */}
    </div>
  );
};

export default AboutUsPage;

