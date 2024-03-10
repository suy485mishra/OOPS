// AboutUsPage.js

import React from 'react';

const AboutUsPage = () => {
  return (
    <div className="container mx-auto my-8 p-8 bg-white rounded shadow-md">
      <h1 className="text-3xl font-bold mb-6">Welcome to [Your Tech Club Name]</h1>
      <p className="text-gray-700 mb-6">
        At [Your Tech Club Name], we are passionate about fostering a vibrant community
        of tech enthusiasts, learners, and innovators. Established with the vision of
        creating a space where technology meets creativity, our club is more than just
        a platform; it's a hub for collaboration, exploration, and skill development.
      </p>

      <h2 className="text-2xl font-bold mb-4">Our Mission</h2>
      <ul className="list-disc ml-6 mb-6">
        <li className="text-gray-700">
          <strong>Inspire:</strong> We aim to inspire the next generation of tech leaders
          by providing an inclusive environment where ideas flourish, curiosity is encouraged,
          and passion drives innovation.
        </li>
        <li className="text-gray-700">
          <strong>Learn:</strong> Through workshops, events, and hands-on projects, we strive
          to create opportunities for continuous learning. Our goal is to equip members with
          the latest skills and knowledge in the ever-evolving world of technology.
        </li>
        <li className="text-gray-700">
          <strong>Connect:</strong> Networking is at the heart of [Your Tech Club Name]. We
          believe in the power of collaboration, and our club serves as a bridge connecting
          like-minded individuals who share a common love for all things tech.
        </li>
      </ul>

      <h2 className="text-2xl font-bold mb-4">What Sets Us Apart</h2>
      <ul className="list-disc ml-6 mb-6">
        <li className="text-gray-700">
          <strong>Diverse Community:</strong> Our members come from various backgrounds,
          creating a rich tapestry of skills, perspectives, and experiences. Whether you're a
          coding prodigy, a design enthusiast, or just getting started, there's a place for you here.
        </li>
        <li className="text-gray-700">
          <strong>Hands-On Approach:</strong> Theory is important, but we believe in learning
          by doing. That's why our club emphasizes practical, real-world applications of technology.
          From hackathons to collaborative projects, we're all about getting our hands dirty with
          code and creativity.
        </li>
        <li className="text-gray-700">
          <strong>Innovation Hub:</strong> [Your Tech Club Name] is not just a club; it's an
          innovation hub. We encourage and support members to turn their wildest tech ideas into
          reality, providing resources, mentorship, and a collaborative environment to fuel your
          entrepreneurial spirit.
        </li>
      </ul>

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
